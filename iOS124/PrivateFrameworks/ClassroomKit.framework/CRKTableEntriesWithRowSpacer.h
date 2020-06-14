//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTableEntries-Protocol.h>

@class NSString;
@protocol CRKTableEntries, CRKTableEntry;

@interface CRKTableEntriesWithRowSpacer : NSObject <CRKTableEntries>
{
    id <CRKTableEntries> mOrigin;
    unsigned long long mIndex;
    id <CRKTableEntry> mSpacerEntry;
}

- (void).cxx_destruct;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (unsigned long long)columnCount;
- (unsigned long long)rowCount;
- (id)initWithOrigin:(id)arg1 index:(unsigned long long)arg2 spacerEntry:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

