//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHCustomDataFormatter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHPrefixSuffixCustomDataFormatter : TSCHCustomDataFormatter
{
    NSString *mPrefixString;
    NSString *mSuffixString;
}

+ (id)dataFormatterWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3 prefixString:(id)arg4 suffixString:(id)arg5;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (id)convertToPersistableStyleObject;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)p_formattedStringWithBodyString:(id)arg1;
- (void)dealloc;
- (id)initWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3 prefixString:(id)arg4 suffixString:(id)arg5;

@end

