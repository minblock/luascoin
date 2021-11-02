// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LUA_QT_LUAADDRESSVALIDATOR_H
#define LUA_QT_LUAADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class LUAAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LUAAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** LUA address widget validator, checks for a valid lua address.
 */
class LUAAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LUAAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // LUA_QT_LUAADDRESSVALIDATOR_H
