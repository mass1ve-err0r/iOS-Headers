//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationURI : IDSDestination
{
    IDSURI *_uri;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) IDSURI *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (id)description;
- (id)groupID;
- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURIString:(id)arg1;
- (id)initWithURI:(id)arg1;

@end

