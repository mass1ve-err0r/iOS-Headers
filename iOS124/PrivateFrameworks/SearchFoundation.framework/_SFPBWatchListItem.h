//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBWatchListItem-Protocol.h>

@class NSData, NSString;

@interface _SFPBWatchListItem : PBCodable <_SFPBWatchListItem, NSSecureCoding>
{
    NSString *_watchListIdentifier;
    NSString *_seasonEpisodeTextFormat;
    NSString *_continueInTextFormat;
    NSString *_openButtonTitle;
    NSString *_installButtonTitle;
    NSString *_purchaseOfferTextFormat;
    NSString *_inUpNextText;
    NSString *_addToUpNextText;
    NSString *_addedToUpNextText;
    NSString *_watchLiveTextFormat;
}

@property(copy, nonatomic) NSString *watchLiveTextFormat; // @synthesize watchLiveTextFormat=_watchLiveTextFormat;
@property(copy, nonatomic) NSString *addedToUpNextText; // @synthesize addedToUpNextText=_addedToUpNextText;
@property(copy, nonatomic) NSString *addToUpNextText; // @synthesize addToUpNextText=_addToUpNextText;
@property(copy, nonatomic) NSString *inUpNextText; // @synthesize inUpNextText=_inUpNextText;
@property(copy, nonatomic) NSString *purchaseOfferTextFormat; // @synthesize purchaseOfferTextFormat=_purchaseOfferTextFormat;
@property(copy, nonatomic) NSString *installButtonTitle; // @synthesize installButtonTitle=_installButtonTitle;
@property(copy, nonatomic) NSString *openButtonTitle; // @synthesize openButtonTitle=_openButtonTitle;
@property(copy, nonatomic) NSString *continueInTextFormat; // @synthesize continueInTextFormat=_continueInTextFormat;
@property(copy, nonatomic) NSString *seasonEpisodeTextFormat; // @synthesize seasonEpisodeTextFormat=_seasonEpisodeTextFormat;
@property(copy, nonatomic) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

