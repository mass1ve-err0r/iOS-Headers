//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class NSArray, NSMutableArray;

@interface ASMoveItemsTask : ASTask
{
    NSArray *_pushedMoveRequests;
    long long _dataclass;
    NSMutableArray *_moveItems;
}

@property(retain, nonatomic) NSMutableArray *moveItems; // @synthesize moveItems=_moveItems;
@property(nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(retain, nonatomic) NSArray *pushedMoveRequests; // @synthesize pushedMoveRequests=_pushedMoveRequests;
- (void).cxx_destruct;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (id)requestBody;
- (void)finishWithError:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (void)addSourceID:(id)arg1 sourceFolder:(id)arg2 destinatonFolder:(id)arg3;
- (int)commandCode;

@end

