#ifndef SRC_LIB_MONGOBACKEND_MONGOCREATESUBSCRIPION_H
#define SRC_LIB_MONGOBACKEND_MONGOCREATESUBSCRIPION_H

/*
*
* Copyright 2016 Telefonica Investigacion y Desarrollo, S.A.U
*
* This file is part of Orion Context Broker.
*
* Orion Context Broker is free software: you can redistribute it and/or
* modify it under the terms of the GNU Affero General Public License as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
*
* Orion Context Broker is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero
* General Public License for more details.
*
* You should have received a copy of the GNU Affero General Public License
* along with Orion Context Broker. If not, see http://www.gnu.org/licenses/.
*
* For those usages not covered by this license please contact with
* iot_support at tid dot es
*
* Author: Fermin Galan
*/

#include <map>
#include <string>
#include <vector>

#include "rest/OrionError.h"
#include "apiTypesV2/Subscription.h"



/* ****************************************************************************
*
* mongoCreateSubscription -
*
* Returns:
* - true: subscription susscessfully created ('oe' must be ignored)
* - false: subscription creation fail (look to 'oe')
*/
extern bool mongoCreateSubscription
(
  const ngsiv2::Subscription&          sub,
  OrionError*                          oe,
  std::map<std::string, std::string>&  uriParams,
  const std::string&                   tenant,
  const std::vector<std::string>&      servicePathV,
  const std::string&                   xauthToken,
  const std::string&                   fiwareCorrelator
);

#endif // SRC_LIB_MONGOBACKEND_MONGOCREATESUBSCRIPION_H