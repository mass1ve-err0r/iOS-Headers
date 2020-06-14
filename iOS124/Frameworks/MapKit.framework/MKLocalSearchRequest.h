//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>

@class CLLocation, NSArray, NSString, _MKLocalSearchExternalTransitLookupParameters, _MKLocalSearchMerchantParameters;
@protocol GEOCompletionItem;

@interface MKLocalSearchRequest : NSObject <NSCopying>
{
    NSString *_naturalLanguageQuery;
    _Bool _hasRegion;
    CDStruct_b7cb895d _region;
    _Bool _allowPhoneNumberLookupUsingCellular;
    _Bool _hasSentFeedbackForCompletion;
    int _resultProviderID;
    id <GEOCompletionItem> _geoCompletionItem;
    CLLocation *_deviceLocation;
    _MKLocalSearchMerchantParameters *_merchantParameters;
    _MKLocalSearchExternalTransitLookupParameters *_externalTransitLookupParameters;
    NSArray *_phoneNumbers;
    NSArray *_muids;
    NSString *_contactsDataString;
    NSString *_canonicalSearchString;
}

+ (id)searchRequestWithCompletion:(id)arg1;
@property(nonatomic) _Bool hasSentFeedbackForCompletion; // @synthesize hasSentFeedbackForCompletion=_hasSentFeedbackForCompletion;
@property(nonatomic, getter=_allowPhoneNumberLookupUsingCellular, setter=_setAllowPhoneNumberLookupUsingCellular:) _Bool allowPhoneNumberLookupUsingCellular; // @synthesize allowPhoneNumberLookupUsingCellular=_allowPhoneNumberLookupUsingCellular;
@property(retain, nonatomic, getter=_canonicalSearchString, setter=_setCanonicalSearchString:) NSString *canonicalSearchString; // @synthesize canonicalSearchString=_canonicalSearchString;
@property(retain, nonatomic, getter=_contactsDataString, setter=_setContactsDataString:) NSString *contactsDataString; // @synthesize contactsDataString=_contactsDataString;
@property(nonatomic, getter=_resultProviderID, setter=_setResultProviderID:) int resultProviderID; // @synthesize resultProviderID=_resultProviderID;
@property(retain, nonatomic, getter=_muids, setter=_setMuids:) NSArray *muids; // @synthesize muids=_muids;
@property(retain, nonatomic, getter=_phoneNumbers, setter=_setPhoneNumbers:) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(retain, nonatomic, getter=_externalTransitLookupParameters, setter=_setExternalTransitLookupParameters:) _MKLocalSearchExternalTransitLookupParameters *externalTransitLookupParameters; // @synthesize externalTransitLookupParameters=_externalTransitLookupParameters;
@property(retain, nonatomic, getter=_merchantParameters, setter=_setMerchantParameters:) _MKLocalSearchMerchantParameters *merchantParameters; // @synthesize merchantParameters=_merchantParameters;
@property(retain, nonatomic, getter=_deviceLocation, setter=_setDeviceLocation:) CLLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(readonly, nonatomic) id <GEOCompletionItem> geoCompletionItem; // @synthesize geoCompletionItem=_geoCompletionItem;
@property(readonly, nonatomic) _Bool _hasRegion; // @synthesize _hasRegion;
@property(nonatomic) CDStruct_b7cb895d region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *naturalLanguageQuery; // @synthesize naturalLanguageQuery=_naturalLanguageQuery;
- (void).cxx_destruct;
- (id)description;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMapsURL:(id)arg1;
- (id)initWithCompletion:(id)arg1;

@end

