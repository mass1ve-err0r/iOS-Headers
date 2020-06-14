//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@protocol HFStringGenerator, NACancelable;

@protocol HFDynamicFormattingValue <NSObject>
@property(readonly, nonatomic) id <HFStringGenerator> currentFormattedValue;
@property(readonly, nonatomic) id value;
- (id <NACancelable>)observeFormattedValueChangesWithBlock:(void (^)(id <HFDynamicFormattingValue>))arg1;
@end

