//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UITableView, UITableViewCell, UIView;

@protocol HsTableViewAdapter <NSObject>
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForDataAtIndex:(unsigned long long)arg2;
- (NSString *)idForDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)getCount;

@optional
- (NSArray *)tableFooterViewControls:(UITableView *)arg1;
- (UIView *)tableHeaderView:(UITableView *)arg1;
- (UIView *)tableFooterView:(UITableView *)arg1;
- (double)tableView:(UITableView *)arg1 heightForCellAtIndex:(unsigned long long)arg2;
@end
