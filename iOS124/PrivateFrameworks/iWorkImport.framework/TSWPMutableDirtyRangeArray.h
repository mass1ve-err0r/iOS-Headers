//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPDirtyRangeArray.h>

__attribute__((visibility("hidden")))
@interface TSWPMutableDirtyRangeArray : TSWPDirtyRangeArray
{
}

- (void)subtract:(id)arg1;
- (void)addChangedRange:(struct _NSRange)arg1 delta:(long long)arg2;
- (void)addChangedRange:(struct _NSRange)arg1 delta:(long long)arg2 allowEmpty:(_Bool)arg3;
- (void)removeRange:(struct _NSRange)arg1;
- (void)addRange:(CDStruct_9ae92562)arg1;
- (void)addRange:(CDStruct_9ae92562)arg1 allowEmpty:(_Bool)arg2;
- (void)clear;

@end

