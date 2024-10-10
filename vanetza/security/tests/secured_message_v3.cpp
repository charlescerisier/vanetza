#include <gtest/gtest.h>
#include <vanetza/common/manual_runtime.hpp>
#include <vanetza/common/stored_position_provider.hpp>
#include <vanetza/security/backend.hpp>
#include <vanetza/security/straight_verify_service.hpp>
#include <vanetza/security/v3/naive_certificate_provider.hpp>
#include <vanetza/security/v3/secured_message.hpp>
#include <vanetza/security/v3/sign_service.hpp>

using namespace vanetza;
using namespace vanetza::security;

TEST(SecuredMessageV3, deserialize)
{
    const ByteBuffer encoded_secured_msg = {
        0x03, 0x81, 0x00, 0x40, 0x03, 0x80, 0x56, 0x20, 0x50, 0x02, 0x80, 0x00,
        0x32, 0x01, 0x00, 0x14, 0x00, 0xd2, 0xfb, 0x6a, 0x0c, 0x62, 0xd2, 0xbf,
        0x6c, 0x54, 0x53, 0x1f, 0x44, 0xef, 0xf5, 0x06, 0x66, 0x36, 0x09, 0x84,
        0x6a, 0x06, 0xc8, 0x00, 0x00, 0xa0, 0x00, 0x07, 0xd1, 0x00, 0x00, 0x02,
        0x02, 0x6a, 0x0c, 0x62, 0xd2, 0x57, 0x41, 0x00, 0x5a, 0x9d, 0x3a, 0xbf,
        0x6e, 0x36, 0x01, 0x20, 0x22, 0x34, 0x23, 0x00, 0xfc, 0x35, 0x96, 0xd4,
        0x58, 0x69, 0x40, 0xe2, 0x4e, 0x03, 0x02, 0x96, 0x8a, 0x9b, 0x34, 0x3d,
        0x82, 0x09, 0x9e, 0x10, 0x41, 0xc0, 0x14, 0xb9, 0x80, 0x40, 0x01, 0x24,
        0x00, 0x01, 0xc8, 0x0b, 0xbf, 0x35, 0x4b, 0x4f, 0x80, 0x0b, 0xa2, 0xd2,
        0xfb, 0x6a, 0x0c, 0x62, 0xd2, 0x80, 0x82, 0xea, 0x71, 0xef, 0xf9, 0xc6,
        0xbb, 0x15, 0x7b, 0x8e, 0x16, 0x66, 0x44, 0x12, 0x0d, 0x7f, 0x98, 0xf2,
        0x52, 0x5e, 0x73, 0x8f, 0x6f, 0x41, 0xd7, 0xfd, 0xfa, 0xc7, 0xd0, 0xd8,
        0x8a, 0xa3, 0x9b, 0x10, 0x96, 0xfa, 0xb3, 0xfb, 0x2a, 0x0a, 0x92, 0x2a,
        0x3b, 0x5f, 0xeb, 0x91, 0xf9, 0xf5, 0x22, 0xd0, 0x06, 0x1f, 0x3b, 0x9c,
        0xa7, 0xa4, 0x6f, 0x7c, 0x7b, 0xd3, 0xef, 0x9d, 0x3a, 0x84, 0xbc
    };

    v3::SecuredMessage msg;
    EXPECT_TRUE(msg.decode(encoded_secured_msg));
    EXPECT_EQ(3, msg.protocol_version());
}

TEST(SecuredMessageV3, verify)
{
    // a CAM signed by a VW Golf 8 including a full signer certificate
    const ByteBuffer encoded_secured_msg = {
        0x03, 0x81, 0x00, 0x40, 0x03, 0x80, 0x56, 0x20, 0x50, 0x02, 0x80, 0x00,
        0x32, 0x01, 0x00, 0x14, 0x00, 0xfe, 0x38, 0x4c, 0xe0, 0xb8, 0x90, 0xbf,
        0x6b, 0x2f, 0x5b, 0x1f, 0x45, 0x28, 0x58, 0x06, 0x64, 0x0a, 0x6d, 0x80,
        0xe8, 0x03, 0xbe, 0x00, 0x00, 0xa0, 0x00, 0x07, 0xd1, 0x00, 0x00, 0x02,
        0x02, 0x4c, 0xe0, 0xb8, 0x90, 0x30, 0xbc, 0x00, 0x5a, 0x9d, 0x42, 0x2a,
        0x0e, 0x35, 0xbb, 0xa0, 0x22, 0x44, 0x23, 0x86, 0xda, 0x35, 0x96, 0xd4,
        0x58, 0x3b, 0xe1, 0x20, 0xa1, 0x03, 0x02, 0x96, 0x8a, 0xcf, 0x33, 0xe7,
        0x81, 0xff, 0x82, 0x10, 0x3f, 0xe0, 0x14, 0x19, 0x80, 0x40, 0x01, 0x24,
        0x00, 0x01, 0xc8, 0x0b, 0xba, 0xb6, 0xc8, 0x15, 0x81, 0x01, 0x01, 0x80,
        0x03, 0x00, 0x80, 0x56, 0xdf, 0xd6, 0xd6, 0x27, 0xa3, 0x62, 0xdc, 0x10,
        0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0xdf, 0xf7, 0xb5, 0x84, 0x00,
        0xa8, 0x01, 0x02, 0x80, 0x01, 0x24, 0x81, 0x04, 0x03, 0x01, 0x00, 0x00,
        0x80, 0x01, 0x25, 0x81, 0x05, 0x04, 0x01, 0x90, 0x1a, 0x25, 0x80, 0x80,
        0x82, 0x04, 0x27, 0xbb, 0x27, 0xc9, 0x98, 0xc1, 0xec, 0xa2, 0xb1, 0x0e,
        0x71, 0x07, 0x98, 0x02, 0x44, 0x51, 0x8b, 0x3c, 0x50, 0xa3, 0xa3, 0x27,
        0xb5, 0xb1, 0x90, 0xd0, 0x90, 0xf1, 0x45, 0x1f, 0x3d, 0x80, 0x80, 0x83,
        0xc2, 0xf3, 0xca, 0xeb, 0xc7, 0xfa, 0x35, 0x94, 0x5c, 0x03, 0x0a, 0x5a,
        0xe0, 0x1a, 0x41, 0x7a, 0xdf, 0x6d, 0xff, 0xd5, 0x41, 0xcc, 0xd2, 0xd9,
        0x2b, 0xfe, 0xb6, 0x3d, 0xc1, 0x56, 0x89, 0xcb, 0xd6, 0xb8, 0xe3, 0x2b,
        0xd5, 0xe8, 0x66, 0xd9, 0xfa, 0xa2, 0xfe, 0x55, 0x95, 0xe2, 0xdb, 0xb9,
        0xbe, 0x3e, 0x96, 0x5a, 0x70, 0x94, 0x25, 0x8b, 0x4a, 0x24, 0x9d, 0xfb,
        0x75, 0x8a, 0x07, 0x80, 0x82, 0x73, 0x7a, 0x94, 0x51, 0x6c, 0x56, 0xf8,
        0x85, 0x26, 0x2f, 0xd4, 0xd2, 0xac, 0x77, 0x5e, 0xba, 0xa1, 0x46, 0x84,
        0xeb, 0xf6, 0x59, 0x39, 0x66, 0xef, 0x7d, 0x30, 0x84, 0x07, 0x8e, 0xdd,
        0xd0, 0xf4, 0xfe, 0x94, 0x06, 0x04, 0x2b, 0x1d, 0x1a, 0x92, 0xb7, 0x0a,
        0x0c, 0xce, 0x8d, 0x7d, 0xe7, 0xe9, 0xb6, 0xfe, 0x13, 0xfb, 0x26, 0x9a,
        0x5a, 0x67, 0x57, 0x31, 0x61, 0x58, 0x9e, 0x2a, 0x79
    };

    v3::SecuredMessage msg;
    EXPECT_TRUE(msg.decode(encoded_secured_msg));
    EXPECT_EQ(3, msg.protocol_version());

    StoredPositionProvider position_provider;
    ManualRuntime runtime { Clock::at("2019-11-21 11:30") };
    auto backend = create_backend("default");

    StraightVerifyService verify_service { runtime, *backend, position_provider };
    VerifyConfirm confirm = verify_service.verify(msg);
    EXPECT_EQ(confirm.report, VerificationReport::Success);
    EXPECT_EQ(confirm.its_aid, aid::CA);
    ByteBuffer ca_ssp {0x01, 0x00, 0x00};
    EXPECT_EQ(confirm.permissions, ca_ssp);
    HashedId8 digest { 0x12, 0x7c, 0xff, 0x38, 0x4c, 0xe0, 0xb8, 0x90};
    EXPECT_EQ(confirm.certificate_id, digest);
    // AT issuer digest = 56dfd6d627a362dc
}

TEST(SecuredMessageV3, sign_and_verify)
{
    StoredPositionProvider position_provider;
    ManualRuntime runtime { Clock::at("2024-08-12 11:30") };
    auto backend = create_backend("default");

    v3::NaiveCertificateProvider cert_provider { runtime };
    v3::DefaultSignHeaderPolicy sign_header_policy { runtime, position_provider, cert_provider };
    v3::StraightSignService sign_service { cert_provider, *backend, sign_header_policy };

    SignRequest request;
    ChunkPacket packet;
    packet[OsiLayer::Application] = ByteBuffer {0x01, 0x02, 0x03};
    request.plain_message = std::move(packet);
    request.its_aid = aid::DEN;
    SignConfirm sign_confirm = sign_service.sign(std::move(request));
    ASSERT_TRUE(sign_confirm.secured_message);

    StraightVerifyService verify_service { runtime, *backend, position_provider };
    VerifyRequest verify_request { SecuredMessageView { *sign_confirm.secured_message } };
    VerifyConfirm verify_confirm = verify_service.verify(verify_request);
    EXPECT_EQ(verify_confirm.report, VerificationReport::Success);
    EXPECT_TRUE(verify_confirm.certificate_validity.valid());
}