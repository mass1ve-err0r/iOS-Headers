//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAccessoryProfile.h>

#import <HomeKit/_HMTelevisionProfileDelegate-Protocol.h>

@class NSArray, NSString;
@protocol HMTelevisionProfileDelegate;

@interface HMTelevisionProfile : HMAccessoryProfile <_HMTelevisionProfileDelegate>
{
    id <HMTelevisionProfileDelegate> _delegate;
}

@property __weak id <HMTelevisionProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)televisionProfileDidUpdateSourceDisplayOrder:(id)arg1;
- (void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) _Bool mediaSourceDisplayOrderModifiable;
@property(readonly) NSArray *mediaSourceDisplayOrder;
- (id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

