//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OIXMLNode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLTextNode : OIXMLNode
{
    NSString *_value;
}

+ (id)textNodeWithStringValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void).cxx_destruct;
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStringValue:(id)arg1;
- (id)name;

@end

