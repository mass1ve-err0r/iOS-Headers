//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNVCardDateComponentsParser, CNVCardLexer, CNVCardMutableNameComponents, CNVCardReadingOptions, CNVCardSelectorMap, NSArray, NSData, NSDateComponents, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;
@protocol CNVCardParsedResultBuilder;

@interface CNVCardParser : NSObject
{
    CNVCardReadingOptions *_options;
    CNVCardLexer *_lexer;
    NSData *_data;
    unsigned long long _defaultEncoding;
    _Bool _hasImportErrors;
    CNVCardDateComponentsParser *_dateComponentsParser;
    CNVCardSelectorMap *_parsingSelectorMap;
    CNVCardSelectorMap *_parameterSelectorMap;
    id <CNVCardParsedResultBuilder> _resultBuilder;
    _Bool _30vCard;
    CNVCardMutableNameComponents *_nameComponents;
    NSDateComponents *_bday;
    NSDateComponents *_altBday;
    NSMutableArray *_emails;
    NSMutableArray *_dateComponents;
    NSMutableArray *_phones;
    NSMutableArray *_addresses;
    NSMutableArray *_relatedNames;
    NSMutableArray *_urls;
    NSMutableArray *_calendarURIs;
    NSMutableString *_notes;
    NSMutableDictionary *_extensions;
    NSMutableArray *_unknowns;
    NSString *_uid;
    NSString *_carddavUID;
    NSMutableArray *_instantMessagingAddresses;
    NSMutableArray *_socialProfiles;
    NSMutableDictionary *_activityAlerts;
    NSMutableArray *_cropRects;
    _Bool _fullNameHasZeroLength;
    NSData *_imageData;
    NSString *_imageGroup;
    NSString *_imageReference;
    NSArray *_itemParameters;
    NSString *_grouping;
    unsigned long long _encoding;
    _Bool _quotedPrintable;
    _Bool _base64;
}

+ (unsigned long long)inferredStringEncodingFromData:(id)arg1;
+ (id)parseData:(id)arg1 options:(id)arg2 resultFactory:(id)arg3;
+ (id)parseData:(id)arg1 resultFactory:(id)arg2;
+ (id)newParameterSelectorMap;
+ (id)newParsingSelectorMap;
+ (_Bool)parseFirstResultInData:(id)arg1 resultBuilder:(id)arg2;
+ (unsigned long long)countOfCardsInData:(id)arg1;
@property(readonly, nonatomic) CNVCardReadingOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) id <CNVCardParsedResultBuilder> resultBuilder; // @synthesize resultBuilder=_resultBuilder;
- (void).cxx_destruct;
- (long long)currentPosition;
- (_Bool)atEOF;
- (id)nextBase64Data;
- (id)parseBase64Data;
- (id)parseUnknownValueStartingAtPosition:(unsigned long long)arg1;
- (id)parseArrayValue;
- (id)parseRemainingLine;
- (_Bool)advancePastSemicolon;
- (id)parseStringValue;
- (id)firstCustomLabelForProperty:(id)arg1 types:(id)arg2;
- (id)phoneLabel;
- (id)fallbackLabelForProperty:(id)arg1;
- (id)genericLabelForProperty:(id)arg1;
- (id)validCountryCodes;
- (_Bool)valueIsEmpty:(id)arg1;
- (void)reportMultiValueLines:(id)arg1 forProperty:(id)arg2;
- (void)reportValue:(id)arg1 forProperty:(id)arg2;
- (void)processExtensionValues;
- (void)processNameValues;
- (void)reportValues;
- (void)parameter_ENCODING:(id)arg1;
- (void)parameter_CHARSET:(id)arg1;
- (void)parameter_BASE64:(id)arg1;
- (void)parameter_QUOTED_PRINTABLE:(id)arg1;
- (SEL)handlerSelectorForParameterName:(id)arg1;
- (id)parseParameterValues;
- (id)nextParameterInCurrentLine;
- (id)parseParameters;
- (id)makeLineWithLabel:(id)arg1 value:(id)arg2;
- (id)makeLineWithValue:(id)arg1 forProperty:(id)arg2;
- (id)parameterValuesForName:(id)arg1;
- (id)typeParameters;
- (id)firstValueForParameterWithName:(id)arg1;
- (id)firstParameterWithName:(id)arg1;
- (id)firstValueForKey:(id)arg1 inExtension:(id)arg2;
- (id)firstValueForKey:(id)arg1 inExtensionGroup:(id)arg2;
- (_Bool)parseExtension:(id)arg1;
- (_Bool)parseInstantMessageValueWithService:(id)arg1;
- (_Bool)parse_X_APPLE_LIKENESS_SERVICE_IDENTIFIER;
- (_Bool)parse_X_APPLE_LIKENESS_SOURCE;
- (_Bool)parse_X_ADDRESSBOOKSERVER_PHONEME_DATA;
- (_Bool)parse_X_YAHOO_ID;
- (_Bool)parse_X_YAHOO;
- (_Bool)parse_X_SOCIALPROFILE;
- (_Bool)parse_X_SKYPE_USERNAME;
- (_Bool)parse_X_SKYPE_ID;
- (_Bool)parse_X_SKYPE;
- (_Bool)parse_X_QQ_ID;
- (_Bool)parse_X_QQ;
- (_Bool)parse_X_PRONUNCIATION_LAST_NAME;
- (_Bool)parse_X_PRONUNCIATION_FIRST_NAME;
- (_Bool)parse_X_PHONETIC_MIDDLE_NAME;
- (_Bool)parse_X_PHONETIC_LAST_NAME;
- (_Bool)parse_X_PHONETIC_FIRST_NAME;
- (_Bool)parse_X_MSN_ID;
- (_Bool)parse_X_MSN;
- (_Bool)parse_X_MAIDENNAME;
- (_Bool)parse_X_JABBER_ID;
- (_Bool)parse_X_JABBER;
- (_Bool)parse_X_ICQ_ID;
- (_Bool)parse_X_ICQ;
- (_Bool)parse_X_GTALK;
- (_Bool)parse_X_GOOGLE_TALK;
- (_Bool)parse_X_GOOGLE_ID;
- (_Bool)parse_X_APPLE_SUBLOCALITY;
- (_Bool)parse_X_APPLE_SUBADMINISTRATIVEAREA;
- (_Bool)parse_X_ALTBDAY;
- (_Bool)parse_X_ACTIVITY_ALERT;
- (_Bool)parse_X_ABUID;
- (_Bool)parse_X_ABSHOWAS;
- (_Bool)parse_X_ABRELATEDNAMES;
- (_Bool)parse_X_AIM_ID;
- (_Bool)parse_X_AIM;
- (_Bool)parse_X_ABPHOTO;
- (_Bool)parse_X_ABORDER;
- (_Bool)parse_X_ABLABEL;
- (_Bool)parse_X_ABDATE;
- (_Bool)parse_X_ABADR;
- (_Bool)parse_VERSION;
- (_Bool)parse_URL;
- (_Bool)parse_UID;
- (_Bool)parse_TITLE;
- (_Bool)parse_TEL;
- (_Bool)parse_REV;
- (_Bool)parse_PRODID;
- (_Bool)parse_PHOTO;
- (_Bool)parse_X_PHONETIC_ORG;
- (_Bool)parse_ORG;
- (_Bool)parse_NOTE;
- (_Bool)parse_NICKNAME;
- (_Bool)parse_N;
- (_Bool)parse_IMPP;
- (_Bool)parse_FN;
- (_Bool)parse_EMAIL;
- (_Bool)parse_CALURI;
- (_Bool)parse_BDAY;
- (_Bool)parse_ADR;
- (_Bool)parse_ADD;
- (_Bool)parseValueUsingSelector:(SEL)arg1;
- (SEL)parsingSelectorForTag:(id)arg1;
- (_Bool)parseLine;
- (_Bool)hasImportErrors;
- (void)cleanUpCardState;
- (_Bool)parseNextResultUsingResultBuilder:(id)arg1;
- (id)pool_nextResultWithFactory:(id)arg1 progressLength:(long long *)arg2;
- (id)nextResultWithFactory:(id)arg1 progressLength:(long long *)arg2;
- (id)resultsWithFactory:(id)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1;

@end

