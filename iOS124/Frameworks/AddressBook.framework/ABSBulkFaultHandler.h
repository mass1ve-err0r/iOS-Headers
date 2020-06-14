//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABSAddressBookContextStorage, CNFuture, NSMutableSet;
@protocol CNScheduler;

@interface ABSBulkFaultHandler : NSObject
{
    ABSAddressBookContextStorage *_storage;
    id <CNScheduler> _inlineScheduler;
    CNFuture *_contactStoreFuture;
    NSMutableSet *_keyDescriptorOfInterests;
    long long _interest;
    double _lastRequestTimeStamp;
}

+ (long long)batchSize;
+ (long long)interestThreshold;
+ (double)interestWindow;
@property(nonatomic) double lastRequestTimeStamp; // @synthesize lastRequestTimeStamp=_lastRequestTimeStamp;
@property(nonatomic) long long interest; // @synthesize interest=_interest;
@property(readonly, nonatomic) NSMutableSet *keyDescriptorOfInterests; // @synthesize keyDescriptorOfInterests=_keyDescriptorOfInterests;
@property(readonly, nonatomic) CNFuture *contactStoreFuture; // @synthesize contactStoreFuture=_contactStoreFuture;
@property(readonly, nonatomic) id <CNScheduler> inlineScheduler; // @synthesize inlineScheduler=_inlineScheduler;
@property(readonly, nonatomic) ABSAddressBookContextStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)refetchContacts:(id)arg1 keysToFetch:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)completePeople:(id)arg1 withKeysToFetch:(id)arg2;
- (id)batchOfPeopleInStorageMissingKeysIncluding:(id)arg1;
- (void)increaseInterest;
- (void)resetInterest;
- (_Bool)withinInterestWindow;
- (void)completePerson:(id)arg1 withKeysToFetch:(id)arg2;
- (id)store;
- (id)initWithStorage:(id)arg1 contactStoreFuture:(id)arg2 schedulerProvider:(id)arg3;

@end

