/*
 * Copyright (C) 2008, 2009, 2010 The Collaborative Software Foundation.
 *
 * This file is part of FeedHandlers (FH).
 *
 * FH is free software: you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * FH is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
 * even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with FH.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __FH_ADM_SGT_REQ_H__
#define __FH_ADM_SGT_REQ_H__

#include "fh_errors.h"

typedef struct {
    int   sgt_reserved;
} fh_adm_sgt_req_t;

FH_STATUS adm_sgt_req_pack   (void *msg, char *data, int *length);
FH_STATUS adm_sgt_req_unpack (void *msg, char *data, int length);

#endif /* __FH_ADM_SGT_REQ_H__ */
