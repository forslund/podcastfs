/*
 *    podcastfs - a simple fuse filesystem for mounting podcasts
 *    Copyright (C) 2008,  Kristian Rumberg (kristianrumberg@gmail.com)
 *
 *    Permission to use, copy, modify, and/or distribute this software for any
 *    purpose with or without fee is hereby granted, provided that the above
 *    copyright notice and this permission notice appear in all copies.
 *
 *    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *    WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *    MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *    ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *    ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */

#include <podcast/util.h>
#include <string.h>

gint strcmp_with_data(gconstpointer a, gconstpointer b, gpointer user_data)
{
	return strcmp((const char*)a, (const char*)b);
}

size_t strvec_len(gchar** strvec)
{
	if (strvec != NULL) {
		size_t len = 0;

		while (strvec[len]) {
			++len;
		}

		return len;
	} else {
		return 0;
	}
}

