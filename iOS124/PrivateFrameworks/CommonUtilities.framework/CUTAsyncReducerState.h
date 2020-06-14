//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTResult, NSArray;

@interface CUTAsyncReducerState : NSObject
{
    NSArray *_visitedItems;
    NSArray *_pendingItems;
    id _currentItem;
    CUTResult *_currentResult;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _continueBlock;
    CDUnknownBlockType _stopBlock;
}

@property(copy, nonatomic) CDUnknownBlockType stopBlock; // @synthesize stopBlock=_stopBlock;
@property(copy, nonatomic) CDUnknownBlockType continueBlock; // @synthesize continueBlock=_continueBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) CUTResult *currentResult; // @synthesize currentResult=_currentResult;
@property(retain, nonatomic) id currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSArray *pendingItems; // @synthesize pendingItems=_pendingItems;
@property(retain, nonatomic) NSArray *visitedItems; // @synthesize visitedItems=_visitedItems;
- (void).cxx_destruct;
- (void)stopWithResult:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (void)continueWithResult:(id)arg1;

@end

