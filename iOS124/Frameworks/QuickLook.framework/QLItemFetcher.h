//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class NSMapTable, NSNumber;

@interface QLItemFetcher : NSObject <NSSecureCoding>
{
    NSMapTable *_observersToBlocks;
    long long _fetchingState;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long fetchingState; // @synthesize fetchingState=_fetchingState;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)newItemProvider;
@property(readonly) NSNumber *itemSize;
- (_Bool)canBeCanceled;
- (_Bool)isLongFetchOperation;
- (id)fetchedContent;
- (void)prepareShareableItem:(CDUnknownBlockType)arg1;
- (id)shareableItem;
- (void)cancelFetch;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_notifyObservers;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

