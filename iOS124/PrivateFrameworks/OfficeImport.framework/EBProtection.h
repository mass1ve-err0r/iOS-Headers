//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBProtection : NSObject
{
}

+ (struct XlDXfProtect *)xlDXfProtectFromEDProtection:(id)arg1;
+ (void)writeProtection:(id)arg1 toXlGraphicsInfo:(struct XlGraphicsInfo *)arg2;
+ (void)writeProtection:(id)arg1 toXlXf:(struct XlXf *)arg2;
+ (id)edProtectionFromXlGraphicsInfo:(struct XlGraphicsInfo *)arg1;
+ (id)edProtectionFromXlDXfProtect:(struct XlDXfProtect *)arg1;
+ (id)edProtectionFromXlXf:(struct XlXf *)arg1;

@end

