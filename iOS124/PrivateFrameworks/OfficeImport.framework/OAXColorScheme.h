//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXColorScheme : NSObject
{
}

+ (void)writeColorScheme:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (id)colorForScheme:(id)arg1 colorMap:(id)arg2 value:(id)arg3;
+ (id)colorForScheme:(id)arg1 value:(id)arg2;
+ (id)schemeColorEnumMap;
+ (void)readFromXmlNode:(struct _xmlNode *)arg1 toColorScheme:(id)arg2;

@end

