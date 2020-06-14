//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVErrorResolver.h>

#import <MediaPlayer/SSRequestDelegate-Protocol.h>

@class MPHomeSharingML3DataProvider, NSError, NSString, SSRentalCheckoutRequest;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate>
{
    unsigned long long _accountID;
    MPHomeSharingML3DataProvider *_dataProvider;
    NSError *_error;
    unsigned long long _itemID;
    unsigned long long _homeSharingID;
    unsigned long long _rentalID;
    SSRentalCheckoutRequest *_request;
}

@property(readonly, nonatomic) unsigned long long itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (_Bool)_errorIsFairPlayError:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)resolveError:(id)arg1;
- (void)dealloc;
- (id)initWithItemID:(unsigned long long)arg1 homeSharingID:(unsigned long long)arg2 rentalID:(unsigned long long)arg3 accountID:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

