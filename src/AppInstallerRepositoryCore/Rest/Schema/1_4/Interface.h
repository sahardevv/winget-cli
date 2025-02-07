// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once
#include "Rest/Schema/1_1/Interface.h"

namespace AppInstaller::Repository::Rest::Schema::V1_4
{
    // Interface to this schema version exposed through IRestClient.
    struct Interface : public V1_1::Interface
    {
        Interface(const std::string& restApi, IRestClient::Information information, const HttpClientHelper::HttpRequestHeaders& additionalHeaders = {}, const HttpClientHelper& httpClientHelper = {});

        Interface(const Interface&) = delete;
        Interface& operator=(const Interface&) = delete;

        Interface(Interface&&) = default;
        Interface& operator=(Interface&&) = default;

        Utility::Version GetVersion() const override;
    };
}
