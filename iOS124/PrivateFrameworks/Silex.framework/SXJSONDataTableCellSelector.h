//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONDataTableSelector.h>

#import <Silex/SXDataTableCellSelector-Protocol.h>

@class NSString;

@interface SXJSONDataTableCellSelector : SXJSONDataTableSelector <SXDataTableCellSelector>
{
}

- (unsigned long long)weightForSelectorKey:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long columnIndex;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *descriptor;
@property(readonly, nonatomic) unsigned long long evenColumns; // @dynamic evenColumns;
@property(readonly, nonatomic) unsigned long long evenRows; // @dynamic evenRows;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long oddColumns; // @dynamic oddColumns;
@property(readonly, nonatomic) unsigned long long oddRows; // @dynamic oddRows;
@property(readonly, nonatomic) unsigned long long rowIndex;
@property(readonly) Class superclass;

@end

