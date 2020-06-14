//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCard.h>

@class NSString, NSURL;

@interface SPDictionaryCard : SFCard
{
    NSURL *_dictionaryURL;
    NSString *_textString;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *textString; // @synthesize textString=_textString;
@property(retain, nonatomic) NSURL *dictionaryURL; // @synthesize dictionaryURL=_dictionaryURL;
- (void).cxx_destruct;
- (void)loadCardSectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

