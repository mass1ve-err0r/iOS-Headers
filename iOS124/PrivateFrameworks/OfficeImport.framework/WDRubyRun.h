//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDCharacterRun.h>

@class WDRubyProperties;

__attribute__((visibility("hidden")))
@interface WDRubyRun : WDCharacterRun
{
    WDCharacterRun *mPhoneticRun;
    WDRubyProperties *mRubyProperties;
}

- (id)description;
- (id)rubyBase;
- (void)appendPhoneticRunString:(id)arg1;
- (void)setPhoneticRunString:(id)arg1;
- (id)phoneticRunString;
- (id)phoneticRun;
- (id)rubyProperties;
- (int)runType;
- (id)initWithParagraph:(id)arg1;
- (void)dealloc;

@end

