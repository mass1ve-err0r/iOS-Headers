//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUProgress.h>

@class NSArray, NSProgress;

__attribute__((visibility("hidden")))
@interface TSUNSProgress : TSUProgress
{
    NSProgress *_NSProgress;
    NSArray *_NSProgressObservers;
}

- (void).cxx_destruct;
- (void)setMessage:(id)arg1;
- (id)message;
- (_Bool)isIndeterminate;
- (double)maxValue;
- (double)value;
- (id)initForSubclass;
- (id)init;
- (id)initWithNSProgress:(id)arg1;

@end

