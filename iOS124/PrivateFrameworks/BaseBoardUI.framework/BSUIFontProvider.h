//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BSUIFontProvider : NSObject
{
    _Bool _isDefault;
}

+ (id)defaultFontProvider;
+ (id)preferredFontProvider;
- (id)preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3;
- (id)preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2;
- (id)initForProvidingDefaultFonts:(_Bool)arg1;

@end

