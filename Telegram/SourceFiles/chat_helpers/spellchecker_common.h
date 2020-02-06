/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#ifndef TDESKTOP_DISABLE_SPELLCHECK

#include "storage/storage_cloud_blob.h"

namespace Spellchecker {

struct Dict : public Storage::CloudBlob::Blob {
};

int GetDownloadSize(int id);
MTP::DedicatedLoader::Location GetDownloadLocation(int id);

[[nodiscard]] QString DictionariesPath();
[[nodiscard]] QString DictPathByLangId(int langId);
bool UnpackDictionary(const QString &path, int langId);
[[nodiscard]] bool DictionaryExists(int langId);

bool WriteDefaultDictionary();
std::vector<Dict> Dictionaries();

} // namespace Spellchecker

#endif // !TDESKTOP_DISABLE_SPELLCHECK