#ifndef BACKEND_NULL_HPP_3E6GMTPL
#define BACKEND_NULL_HPP_3E6GMTPL

#include <vanetza/security/backend.hpp>

namespace vanetza
{
namespace security
{

/**
 * \brief A backend doing nothing
 *
 * This backend is INSECURE quite obviously!
 * It will return a faked signature and silently accept all data at verification.
 */
class BackendNull : public Backend
{
public:
    static constexpr auto backend_name = "Null";

    /// \see Backend::sign_data
    EcdsaSignature sign_data(const ecdsa256::PrivateKey& private_key, const ByteBuffer& data_buffer) override;

    /// \see Backend::sign_digest
    Signature sign_digest(const PrivateKey&, const ByteBuffer&) override;

    /// \see Backend::verify_data
    bool verify_data(const ecdsa256::PublicKey& public_key, const ByteBuffer& data, const EcdsaSignature& sig) override;

    /// \see Backend::verify_digest
    bool verify_digest(const PublicKey&, const ByteBuffer& digest, const Signature&) override;

    /// \see Backend::decompress_point
    boost::optional<Uncompressed> decompress_point(const EccPoint& ecc_point) override;

    /// \see Backend::calculate_hash
    ByteBuffer calculate_hash(HashAlgorithm, const ByteBuffer&) override;

private:
    EcdsaSignature fake_signature() const;
};

} // namespace security
} // namespace vanetza

#endif /* BACKEND_NULL_HPP_3E6GMTPL */

