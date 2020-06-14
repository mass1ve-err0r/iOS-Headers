//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrintKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL, NSUUID, PKPaperList;

@interface PKPrinter : NSObject <NSSecureCoding>
{
    long long type;
    long long accessState;
    NSDictionary *printInfoSupported;
    struct _http_s {
        int _field1;
        int _field2;
        int _field3;
        long long _field4;
        int _field5;
        int _field6;
        int _field7;
        int _field8;
        struct sockaddr_in _field9;
        char _field10[256];
        char _field11[27][256];
        char *_field12;
        int _field13;
        int _field14;
        int _field15;
        char _field16[2048];
        int _field17;
        unsigned char _field18[88];
        char _field19[256];
        unsigned int _field20;
        struct SSLContext *_field21;
        int _field22;
        struct fd_set *_field23;
        int _field24;
        char *_field25;
        char _field26[256];
        char _field27[256];
        int _field28;
        long long _field29;
        union _http_addr_u *_field30;
        struct http_addrlist_s *_field31;
        char _field32[2048];
        int _field33;
        char *_field34;
        char *_field35;
        struct __CFArray *_field36;
        CDUnknownFunctionPointerType _field37;
        void *_field38;
        double _field39;
        int _field40;
        int _field41;
        int _field42;
        char *_field43;
        char *_field44;
        char *_field45;
        char *_field46;
        char *_field47;
        char *_field48;
        int _field49;
        struct z_stream_s _field50;
        char *_field51;
    } *job_http;
    NSMutableDictionary *privateData;
    NSMutableDictionary *specialFeedOrientation;
    NSArray *printScalingSupported;
    NSArray *mandatoryJobAttributes;
    NSString *quotaManagementURL;
    int maxPDFKBytes;
    int maxJPEGKBytes;
    int maxJPEGXDimension;
    int maxJPEGYDimension;
    int maxCopies;
    int maxDocumentPasswordLength;
    int preferred_landscape;
    int printerStateReasons;
    int recentRssiValues[5];
    _Bool isLocal;
    _Bool hasIdentifyPrinterOp;
    _Bool connectionShouldNotBeTrusted;
    _Bool isFromMCProfile;
    long long identifyActionsSupported;
    NSString *name;
    long long kind;
    NSUUID *btleUUID;
    long long btleMeasuredPower;
    long long proximity;
    long long _jobAccountIDSupport;
    PKPaperList *_paperList;
    NSArray *_trays;
    NSArray *_jpegFeaturesSupported;
}

+ (id)nameForHardcodedURI:(id)arg1;
+ (id)hardcodedURIs;
+ (_Bool)supportsSecureCoding;
+ (_Bool)printerLookupWithName:(id)arg1 andTimeout:(double)arg2;
+ (id)printerWithName:(id)arg1 discoveryTimeout:(double)arg2;
+ (id)printerWithName:(id)arg1;
+ (void)listenForPrinterNotifications;
+ (_Bool)uriMatchesMCProfileAdded:(id)arg1;
+ (_Bool)mcProfilePrintersOnlyAllowed;
+ (_Bool)ippsIsRequired;
+ (id)requiredPDL;
+ (_Bool)urfIsOptional;
+ (struct _ipp_s *)getAttributes:(const char **)arg1 count:(int)arg2 fromURI:(id)arg3;
@property(retain) NSArray *jpegFeaturesSupported; // @synthesize jpegFeaturesSupported=_jpegFeaturesSupported;
@property(retain) NSArray *trays; // @synthesize trays=_trays;
@property(retain) PKPaperList *paperList; // @synthesize paperList=_paperList;
@property long long jobAccountIDSupport; // @synthesize jobAccountIDSupport=_jobAccountIDSupport;
@property long long proximity; // @synthesize proximity;
@property long long btleMeasuredPower; // @synthesize btleMeasuredPower;
@property(retain) NSUUID *btleUUID; // @synthesize btleUUID;
@property(readonly) long long type; // @synthesize type;
@property(readonly) _Bool hasIdentifyPrinterOp; // @synthesize hasIdentifyPrinterOp;
@property _Bool isLocal; // @synthesize isLocal;
@property(readonly) long long accessState; // @synthesize accessState;
@property(readonly) long long kind; // @synthesize kind;
@property(retain) NSString *name; // @synthesize name;
- (_Bool)supportsJobAccountID;
- (void)setupWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)validatePassCode:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)showPassCodeForSetupWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) _Bool setupSupportsPasswordScope;
@property(readonly) _Bool needsSetup;
- (void)reconfirmWithForce:(_Bool)arg1;
- (void)removeCredentialsFromKeychain;
- (void)cancelUnlock;
- (void)unlockWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)startJob:(id)arg1 ofType:(id)arg2;
- (long long)sendData:(const char *)arg1 ofLength:(long long)arg2;
- (long long)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3;
- (long long)finishJob;
- (long long)abortJob;
- (void)doMedia2:(struct _ipp_s *)arg1;
- (id)matchedPaper:(id)arg1 preferBorderless:(_Bool)arg2 withDuplexMode:(id)arg3 didMatch:(_Bool *)arg4;
- (id)papersForDocumentWithSize:(struct CGSize)arg1 scaleUpOnRoll:(_Bool)arg2 andDuplex:(_Bool)arg3;
- (id)papersForDocumentWithSize:(struct CGSize)arg1 andDuplex:(_Bool)arg2;
- (id)papersForPhotoWithSize:(struct CGSize)arg1;
- (id)paperListForDuplexMode:(id)arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize)arg1 forPhoto:(_Bool)arg2;
- (id)rollReadyPaperListWithContentSize:(struct CGSize)arg1;
- (_Bool)knowsReadyPaperList;
- (_Bool)isPaperReady:(id)arg1;
@property(readonly) NSArray *localizedNamesOfEmptyTrays; // @dynamic localizedNamesOfEmptyTrays;
@property(readonly) NSString *uuid; // @dynamic uuid;
@property _Bool isFromMCProfile; // @synthesize isFromMCProfile;
@property(readonly) _Bool isIPPS; // @dynamic isIPPS;
@property(readonly) _Bool isAdobeRGBSupported; // @dynamic isAdobeRGBSupported;
- (void)getSupplyLevels:(CDUnknownBlockType)arg1;
@property(readonly) NSDictionary *printInfoSupported;
- (void)checkOperations:(struct _ipp_s *)arg1;
- (void)identifySelf;
@property(readonly) _Bool hasPrintInfoSupported; // @dynamic hasPrintInfoSupported;
- (long long)feedOrientation:(id)arg1;
- (void)aggdAppsAndPrinters;
- (id)availableRollPapersPreferBorderless:(_Bool)arg1;
@property(readonly) long long jobTypesSupported;
@property(readonly) long long identifyActionsSupported;
- (id)localizedPrinterWarnings;
- (void)handlePrinterStateReasonsFromResponse:(struct _ipp_s *)arg1;
- (id)makeAndModel;
- (id)location;
- (id)displayName;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isBonjour;
@property(readonly) NSURL *printerURL;
- (_Bool)isEqual:(id)arg1;
- (void)addRSSIValue:(id)arg1;
- (void)setPrivateObject:(id)arg1 forKey:(id)arg2;
- (id)privateObjectForKey:(id)arg1;
- (struct http_addrlist_s *)lookup;
- (id)localName;
- (long long)finalizeJob:(int)arg1;
- (struct _ipp_s *)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3;
- (_Bool)resolveWithTimeout:(int)arg1;
- (_Bool)resolve;
- (_Bool)resolveIfNeeded;
@property(readonly, retain) NSString *scheme;
@property(retain) NSNumber *port; // @dynamic port;
@property(retain) NSString *hostname; // @dynamic hostname;
@property(retain) NSDictionary *TXTRecord; // @dynamic TXTRecord;
- (id)TXTRecordWithTimeout:(int)arg1;
- (id)txtRecordObjectForKey:(id)arg1;
- (void)setAccessStateFromTXT;
- (void)updateType;
- (id)initWithName:(id)arg1 TXTRecord:(id)arg2;
- (id)initWithName:(id)arg1 TXT:(id)arg2;
- (struct _ipp_s *)getAttributes:(const char **)arg1 count:(int)arg2;
- (struct _ipp_s *)getSupplyLevelAttributes;
- (struct _ipp_s *)getPrinterAttributes;

@end

