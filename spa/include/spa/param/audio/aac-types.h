/* Simple Plugin API */
/* SPDX-FileCopyrightText: Copyright © 2018 Wim Taymans */
/* SPDX-License-Identifier: MIT */

#ifndef SPA_AUDIO_AAC_TYPES_H
#define SPA_AUDIO_AAC_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#include <spa/utils/type.h>
#include <spa/param/audio/aac.h>

#define SPA_TYPE_INFO_AudioAACStreamFormat		SPA_TYPE_INFO_ENUM_BASE "AudioAACStreamFormat"
#define SPA_TYPE_INFO_AUDIO_AAC_STREAM_FORMAT_BASE	SPA_TYPE_INFO_AudioAACStreamFormat ":"

static const struct spa_type_info spa_type_audio_aac_stream_format[] = {
	{ SPA_AUDIO_AAC_STREAM_FORMAT_UNKNOWN, SPA_TYPE_Int, SPA_TYPE_INFO_AUDIO_AAC_STREAM_FORMAT_BASE "UNKNOWN", NULL },
	{ SPA_AUDIO_AAC_STREAM_FORMAT_RAW, SPA_TYPE_Int, SPA_TYPE_INFO_AUDIO_AAC_STREAM_FORMAT_BASE "RAW", NULL },
	{ SPA_AUDIO_AAC_STREAM_FORMAT_MP2ADTS, SPA_TYPE_Int, SPA_TYPE_INFO_AUDIO_AAC_STREAM_FORMAT_BASE "MP2ADTS", NULL },
	{ SPA_AUDIO_AAC_STREAM_FORMAT_MP4ADTS, SPA_TYPE_Int, SPA_TYPE_INFO_AUDIO_AAC_STREAM_FORMAT_BASE "MP4ADTS", NULL },
	{ SPA_AUDIO_AAC_STREAM_FORMAT_MP4LOAS, SPA_TYPE_Int, SPA_TYPE_INFO_AUDIO_AAC_STREAM_FORMAT_BASE "MP4LOAS", NULL },
	{ SPA_AUDIO_AAC_STREAM_FORMAT_MP4LATM, SPA_TYPE_Int, SPA_TYPE_INFO_AUDIO_AAC_STREAM_FORMAT_BASE "MP4LATM", NULL },
	{ SPA_AUDIO_AAC_STREAM_FORMAT_ADIF, SPA_TYPE_Int, SPA_TYPE_INFO_AUDIO_AAC_STREAM_FORMAT_BASE "ADIF", NULL },
	{ SPA_AUDIO_AAC_STREAM_FORMAT_MP4FF, SPA_TYPE_Int, SPA_TYPE_INFO_AUDIO_AAC_STREAM_FORMAT_BASE "MP4FF", NULL },
	{ 0, 0, NULL, NULL },
};

/**
 * \}
 */

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif /* SPA_AUDIO_AAC_TYPES_H */