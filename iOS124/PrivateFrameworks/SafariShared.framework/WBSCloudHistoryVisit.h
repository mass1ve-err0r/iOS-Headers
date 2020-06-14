//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, WBSHistoryVisitIdentifier;

@interface WBSCloudHistoryVisit : NSObject <NSSecureCoding>
{
    _Bool _loadSuccessful;
    _Bool _httpNonGet;
    WBSHistoryVisitIdentifier *_visitIdentifier;
    NSString *_title;
    WBSHistoryVisitIdentifier *_redirectSourceVisitIdentifier;
    WBSCloudHistoryVisit *_redirectSourceVisit;
    WBSHistoryVisitIdentifier *_redirectDestinationVisitIdentifier;
    WBSCloudHistoryVisit *_redirectDestinationVisit;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak WBSCloudHistoryVisit *redirectDestinationVisit; // @synthesize redirectDestinationVisit=_redirectDestinationVisit;
@property(copy, nonatomic) WBSHistoryVisitIdentifier *redirectDestinationVisitIdentifier; // @synthesize redirectDestinationVisitIdentifier=_redirectDestinationVisitIdentifier;
@property(nonatomic) __weak WBSCloudHistoryVisit *redirectSourceVisit; // @synthesize redirectSourceVisit=_redirectSourceVisit;
@property(copy, nonatomic) WBSHistoryVisitIdentifier *redirectSourceVisitIdentifier; // @synthesize redirectSourceVisitIdentifier=_redirectSourceVisitIdentifier;
@property(nonatomic, getter=wasHTTPNonGet) _Bool httpNonGet; // @synthesize httpNonGet=_httpNonGet;
@property(nonatomic, getter=loadWasSuccessful) _Bool loadSuccessful; // @synthesize loadSuccessful=_loadSuccessful;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) WBSHistoryVisitIdentifier *visitIdentifier; // @synthesize visitIdentifier=_visitIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithVisitIdentifier:(id)arg1 title:(id)arg2 loadSuccessful:(_Bool)arg3 httpNonGet:(_Bool)arg4 redirectSourceVisitIdentifier:(id)arg5 redirectDestinationVisitIdentifier:(id)arg6;
- (id)initWithHistoryVisit:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

