//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMTableColumnInfo : NSObject
{
    NSMutableArray *mStopArray;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned int)columnSpan:(float)arg1 at:(unsigned int)arg2;
- (void)mergeStopArray:(id)arg1;
- (float)stopAt:(unsigned int)arg1;
- (id)initWithStopArray:(id)arg1;

@end

