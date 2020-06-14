//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICLibraryAuthServiceClientTokenIdentifier, NSString;

@interface ICLibraryAuthServiceClientTokenResult : NSObject <NSCopying>
{
    NSString *_token;
    long long _generatedAtMillis;
    long long _timeToLiveMillis;
    long long _lifespanMillis;
    ICLibraryAuthServiceClientTokenIdentifier *_tokenIdentitifer;
}

@property(readonly, copy, nonatomic) ICLibraryAuthServiceClientTokenIdentifier *tokenIdentitifer; // @synthesize tokenIdentitifer=_tokenIdentitifer;
@property(readonly, nonatomic) long long lifespanMillis; // @synthesize lifespanMillis=_lifespanMillis;
@property(readonly, nonatomic) long long timeToLiveMillis; // @synthesize timeToLiveMillis=_timeToLiveMillis;
@property(readonly, nonatomic) long long generatedAtMillis; // @synthesize generatedAtMillis=_generatedAtMillis;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseDictionary:(id)arg1;

@end

