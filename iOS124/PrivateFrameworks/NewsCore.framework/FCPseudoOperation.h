//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationCanceling-Protocol.h>
#import <NewsCore/FCOperationIdentifying-Protocol.h>
#import <NewsCore/FCOperationPrioritizing-Protocol.h>

@class NSString;

@interface FCPseudoOperation : NSObject <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing>
{
    long long _relativePriority;
    CDUnknownBlockType _cancelBlock;
    NSString *_shortOperationDescription;
    NSString *_longOperationDescription;
    CDUnknownBlockType _priorityBlock;
}

@property(copy, nonatomic) CDUnknownBlockType priorityBlock; // @synthesize priorityBlock=_priorityBlock;
@property(copy, nonatomic) NSString *longOperationDescription; // @synthesize longOperationDescription=_longOperationDescription;
@property(copy, nonatomic) NSString *shortOperationDescription; // @synthesize shortOperationDescription=_shortOperationDescription;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCancelBlock:(CDUnknownBlockType)arg1 priorityBlock:(CDUnknownBlockType)arg2;
- (id)initWithCancelBlock:(CDUnknownBlockType)arg1 priorityBlock:(CDUnknownBlockType)arg2 shortDescription:(id)arg3 longDescription:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

