/**
 * xrdp: A Remote Desktop Protocol server.
 *
 * Copyright (C) Jay Sorg 2019
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * MS-RDPEGFX
 */

#ifndef _XRDP_EGFX_H
#define _XRDP_EGFX_H

struct xrdp_egfx
{
    int chanid;
    int pad0;
    struct stream *s;
};

struct xrdp_egfx *
xrdp_egfx_create(struct xrdp_mm *mm);
int
xrdp_egfx_delete(struct xrdp_egfx *egfx);

#endif
