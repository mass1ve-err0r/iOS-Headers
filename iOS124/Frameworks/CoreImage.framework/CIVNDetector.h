//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIDetector.h>

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIVNDetector : CIDetector
{
    CIContext *context;
}

- (id)featuresInImage:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end

