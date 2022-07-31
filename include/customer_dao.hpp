#pragma once
#include <optional>

#include <Poco/Data/Session.h>

#include "customer.hpp"

namespace db {
class CustomerDAO {
public:
  explicit CustomerDAO(Poco::Data::Session& session);

  std::optional<Customer> createCustomer(std::string name);

private:
  static std::uint64_t nextId();

  Poco::Data::Session& m_session;
};
} // namespace db
