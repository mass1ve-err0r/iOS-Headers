//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPMutableHistoryEntry.h>

#import <MapsSupport/MSPHistoryEntryTransitLineItem-Protocol.h>

@class NSString;
@protocol GEOTransitLineItem;

@interface MSPMutableHistoryEntryTransitLineItem : MSPMutableHistoryEntry <MSPHistoryEntryTransitLineItem>
{
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
- (_Bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
@property(retain, nonatomic) id <GEOTransitLineItem> lineItem;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

