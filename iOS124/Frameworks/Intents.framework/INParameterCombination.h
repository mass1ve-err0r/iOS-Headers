//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INParameterCombination : NSObject <NSSecureCoding>
{
    _Bool _primary;
    _Bool _supportsBackgroundExecution;
    NSString *_titleFormatString;
    NSString *_titleFormatStringLocID;
    NSString *_subtitleFormatString;
    NSString *_subtitleFormatStringLocID;
    NSString *_localizationTable;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *localizationTable; // @synthesize localizationTable=_localizationTable;
@property(copy, nonatomic) NSString *subtitleFormatStringLocID; // @synthesize subtitleFormatStringLocID=_subtitleFormatStringLocID;
@property(copy, nonatomic) NSString *subtitleFormatString; // @synthesize subtitleFormatString=_subtitleFormatString;
@property(copy, nonatomic) NSString *titleFormatStringLocID; // @synthesize titleFormatStringLocID=_titleFormatStringLocID;
@property(copy, nonatomic) NSString *titleFormatString; // @synthesize titleFormatString=_titleFormatString;
@property(nonatomic) _Bool supportsBackgroundExecution; // @synthesize supportsBackgroundExecution=_supportsBackgroundExecution;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

