//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPAbstractMutableLargeArraySegment.h>

__attribute__((visibility("hidden")))
@interface TSPMutableLargeUUIDArraySegment : TSPAbstractMutableLargeArraySegment
{
}

- (void)loadFromMessage:(const struct LargeUUIDArraySegment *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToMessage:(struct LargeUUIDArraySegment *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (unsigned long long)estimatedByteSizeOfElement:(id)arg1;

@end

