/**
 * File name: RkModelImpl.h
 * Project: Redkite (A small GUI toolkit)
 *
 * Copyright (C) 2020 Iurie Nistor <http://iuriepage.wordpress.com>
 *
 * This file is part of Redkite.
 *
 * Redkite is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "RkModelImpl.h"

RkModel::RkModelImpl::RkModelImpl(RkModel* interface, RkObject* parent)
        : RkObjectImpl(interface, parent)
        , inf_ptr{interface}
        , selectedIndex(-1)
{
}

bool RkModel::RkModelImpl::isItemSelected(size_t index) const
{
        return selectedIndex < inf_ptr->itemsNumber() && index == selectedIndex;
}

void RkModel::RkModelImpl::selectItem(size_t index)
{
        selectedIndex = index;
}
