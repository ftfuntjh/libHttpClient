// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#pragma once
//#include "shared_macros.h"
//#include "WexTestClass.h"
#include <strsafe.h>

#define DATETIME_STRING_LENGTH_TO_SECOND 19
#define TICKS_PER_SECOND 10000000i64
typedef std::chrono::duration<long long, std::ratio<1, 10000000>> ticks;

class UnitTestHelpers
{
public:
    static void StartResponseLogging();

    static void RemoveResponseLogging();
};

std::wstring TimeSpanToString(
    _In_ Windows::Foundation::TimeSpan timeSpan
    );

std::wstring DateTimeToString(
    _In_ Windows::Foundation::DateTime dateTime
    );


std::wstring FormatString(LPCWSTR strMsg, ...);
