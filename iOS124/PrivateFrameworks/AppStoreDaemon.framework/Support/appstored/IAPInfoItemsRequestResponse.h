//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSNumber;

@interface IAPInfoItemsRequestResponse : NSObject
{
    _Bool _update;
    ACAccount *_account;
    NSArray *_addedIAPs;
    NSArray *_removedIAPs;
    NSNumber *_revision;
}

+ (id)newUpdateResponseWithAddedIAPs:(id)arg1 removedIAPs:(id)arg2 revision:(id)arg3 forAccount:(id)arg4;
+ (id)newRefreshResponseWithIAPs:(id)arg1 revision:(id)arg2 forAccount:(id)arg3;
@property(readonly, getter=isUpdate) _Bool update; // @synthesize update=_update;
@property(readonly) NSNumber *revision; // @synthesize revision=_revision;
@property(readonly) NSArray *removedIAPs; // @synthesize removedIAPs=_removedIAPs;
@property(readonly) NSArray *addedIAPs; // @synthesize addedIAPs=_addedIAPs;
@property(readonly) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_initWithAddedIAPs:(id)arg1 removedIAPs:(id)arg2 revision:(id)arg3 isUpdate:(_Bool)arg4 forAccount:(id)arg5;

@end

