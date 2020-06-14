//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class ASCollection, NSMutableArray, NSNumber;

@interface ASFolderItemsSyncResponse : ASItem
{
    long long _dataclass;
    NSNumber *_status;
    ASCollection *_collection;
    NSMutableArray *_meetingRequestDatas;
    NSMutableArray *_deliveryIdsToClear;
    NSMutableArray *_deliveryIdsToSoftClear;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableArray *deliveryIdsToSoftClear; // @synthesize deliveryIdsToSoftClear=_deliveryIdsToSoftClear;
@property(retain, nonatomic) NSMutableArray *deliveryIdsToClear; // @synthesize deliveryIdsToClear=_deliveryIdsToClear;
@property(retain, nonatomic) NSMutableArray *meetingRequestDatas; // @synthesize meetingRequestDatas=_meetingRequestDatas;
@property(retain, nonatomic) ASCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
- (void).cxx_destruct;
- (void)addDeliveryIdToSoftClear:(id)arg1;
- (void)addDeliveryIdToClear:(id)arg1;
- (void)addMeetingRequestData:(id)arg1;
- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)_processMeetingRequestDatasForAccount:(id)arg1;
- (void)setCollections:(id)arg1;
- (id)initWithDataclass:(long long)arg1;

@end

