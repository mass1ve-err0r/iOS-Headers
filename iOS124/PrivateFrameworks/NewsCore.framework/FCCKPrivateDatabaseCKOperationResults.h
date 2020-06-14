//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCThreadSafeMutableArray, NSArray, NSError;
@protocol OS_dispatch_group;

@interface FCCKPrivateDatabaseCKOperationResults : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    FCThreadSafeMutableArray *_threadSafeItems;
    FCThreadSafeMutableArray *_threadSafeErrorsAndItemIDs;
}

@property(retain, nonatomic) FCThreadSafeMutableArray *threadSafeErrorsAndItemIDs; // @synthesize threadSafeErrorsAndItemIDs=_threadSafeErrorsAndItemIDs;
@property(retain, nonatomic) FCThreadSafeMutableArray *threadSafeItems; // @synthesize threadSafeItems=_threadSafeItems;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *combinedError;
@property(readonly, nonatomic) NSArray *combinedResultItems;
- (void)notifyWhenFinishWithQoS:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)operationDidFinishWithItemIDs:(id)arg1 resultItems:(id)arg2 error:(id)arg3;
- (void)operationWillStart;
- (id)init;

@end

