/*****************************************************************************
 * PokerTH - The open source texas holdem engine                             *
 * Copyright (C) 2006-2011 Felix Hammer, Florian Thauer, Lothar May          *
 *                                                                           *
 * This program is free software: you can redistribute it and/or modify      *
 * it under the terms of the GNU Affero General Public License as            *
 * published by the Free Software Foundation, either version 3 of the        *
 * License, or (at your option) any later version.                           *
 *                                                                           *
 * This program is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 * GNU Affero General Public License for more details.                       *
 *                                                                           *
 * You should have received a copy of the GNU Affero General Public License  *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.     *
 *****************************************************************************/
#ifndef MYNICKLISTSORTFILTERPROXYMODEL_H
#define MYNICKLISTSORTFILTERPROXYMODEL_H

#include <QSortFilterProxyModel>

class MyNickListSortFilterProxyModel : public QSortFilterProxyModel
{
	Q_OBJECT

public:
	MyNickListSortFilterProxyModel(QObject *parent = 0);

	void setFilterState(int state);
	void setLastFilterStateCountry( bool country ) {
		lastFilterStateCountry = country;
	}
	void setLastFilterStateAlpha( bool alpha ) {
		lastFilterStateAlpha = alpha;
	}

protected:
	bool filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const;
	bool lessThan(const QModelIndex &left, const QModelIndex &right) const;

private:

	int filterState;
	bool lastFilterStateCountry;
	bool lastFilterStateAlpha;

};

#endif // MYGAMELISTSORTFILTERPROXYMODEL_H
