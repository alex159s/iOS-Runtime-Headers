/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSData, NSDictionary, NSInputStream, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSCoding, NSCopying, NSMutableCopying> {
    long long _allowedRetryCount;
    unsigned long long _cachePolicy;
    NSString *_clientAuditBundleIdentifier;
    NSData *_clientAuditTokenData;
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _expectedContentLength;
    NSData *_httpBody;
    NSInputStream *_httpBodyStream;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    long long _kbsyncType;
    unsigned long long _networkServiceType;
    NSDictionary *_requestParameters;
    BOOL _requiresExtendedValidationCertificates;
    double _timeoutInterval;
    NSString *_urlBagKey;
    long long _urlBagType;
    id _urlBagURLBlock;
    NSArray *_urls;
    NSArray *_userAgentComponents;
    bool_allowsBootstrapCellularData;
    bool_isITunesStoreRequest;
    bool_largeDownload;
    bool_requiresHTTPS;
    bool_shouldDecodeResponse;
    bool_shouldDisableCellular;
    bool_shouldDisableCellularFallback;
    bool_shouldProcessProtocol;
    bool_shouldSendSecureToken;
    bool_shouldSetCookies;
}

@property(copy,readonly) NSData * HTTPBody;
@property(retain,readonly) NSInputStream * HTTPBodyStream;
@property(copy,readonly) NSDictionary * HTTPHeaders;
@property(copy,readonly) NSString * HTTPMethod;
@property(getter=isITunesStoreRequest,readonly) bool ITunesStoreRequest;
@property(readonly) long long KBSyncType;
@property(retain,readonly) NSURL * URL;
@property(copy,readonly) NSString * URLBagKey;
@property(readonly) long long URLBagType;
@property(copy,readonly) id URLBagURLBlock;
@property(copy,readonly) NSArray * URLs;
@property(readonly) long long allowedRetryCount;
@property(readonly) bool allowsBootstrapCellularData;
@property(readonly) unsigned long long cachePolicy;
@property(readonly) bool canBeResolved;
@property(copy,readonly) NSString * clientAuditBundleIdentifier;
@property(copy,readonly) NSData * clientAuditTokenData;
@property(copy,readonly) NSString * clientIdentifier;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) long long expectedContentLength;
@property(readonly) unsigned long long hash;
@property(getter=isLargeDownload,readonly) bool largeDownload;
@property(readonly) unsigned long long networkServiceType;
@property(copy,readonly) NSDictionary * requestParameters;
@property(readonly) bool requiresExtendedValidationCertificates;
@property(readonly) bool requiresHTTPS;
@property(readonly) bool shouldAddKBSyncData;
@property(readonly) bool shouldDecodeResponse;
@property(readonly) bool shouldDisableCellular;
@property(readonly) bool shouldDisableCellularFallback;
@property(readonly) bool shouldProcessProtocol;
@property(readonly) bool shouldSendSecureToken;
@property(readonly) bool shouldSetCookies;
@property(readonly) Class superclass;
@property(readonly) double timeoutInterval;
@property(copy,readonly) NSArray * userAgentComponents;

- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPHeaders;
- (id)HTTPMethod;
- (long long)KBSyncType;
- (id)URL;
- (id)URLBagKey;
- (long long)URLBagType;
- (id)URLBagURLBlock;
- (id)URLs;
- (id)_initCommon;
- (long long)allowedRetryCount;
- (bool)allowsBootstrapCellularData;
- (unsigned long long)cachePolicy;
- (bool)canBeResolved;
- (id)clientAuditBundleIdentifier;
- (id)clientAuditTokenData;
- (id)clientIdentifier;
- (id)copyURLRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isITunesStoreRequest;
- (bool)isLargeDownload;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)networkServiceType;
- (id)requestParameters;
- (bool)requiresExtendedValidationCertificates;
- (bool)requiresHTTPS;
- (bool)shouldAddKBSyncData;
- (bool)shouldDecodeResponse;
- (bool)shouldDisableCellular;
- (bool)shouldDisableCellularFallback;
- (bool)shouldProcessProtocol;
- (bool)shouldSendSecureToken;
- (bool)shouldSetCookies;
- (double)timeoutInterval;
- (id)userAgentComponents;

@end