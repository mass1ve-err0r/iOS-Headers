//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDStats : NSObject
{
}

+ (id)familyNames;
+ (id)hardwareModel;
+ (id)sharedInstance;
- (void)addToDictionary:(id)arg1 perfMetric:(id)arg2;
- (void)addToDictionary:(id)arg1 perfMetricFamily:(id)arg2;
- (id)dictionary;
- (void)addToStatsPrinter:(id)arg1 perfMetricFamily:(id)arg2;
- (id)string;
- (void)dealloc;
- (id)init;

@end

