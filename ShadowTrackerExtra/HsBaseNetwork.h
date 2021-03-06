//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsNetwork-Protocol.h"

@class HsDomain, HsNetworkAuthDataProvider, NSString;
@protocol HsCoreDevice, HsHTTPTransport, HsNetworkRequestDAO;

@interface HsBaseNetwork : NSObject <HsNetwork>
{
    id <HsHTTPTransport> _httpTransport;
    NSString *_route;
    NSString *_apiKey;
    NSString *_appId;
    NSString *_domainName;
    HsDomain *_domain;
    id <HsCoreDevice> _device;
    id <HsNetworkRequestDAO> _networkRequestDAO;
    HsNetworkAuthDataProvider *_networkAuthDataProvider;
}

@property(readonly, nonatomic) id <HsHTTPTransport> httpTransport; // @synthesize httpTransport=_httpTransport;
- (void).cxx_destruct;
- (id)route;
- (id)networkRequestDao;
- (id)convertCustomIssueFieldsToString:(id)arg1;
- (id)convertMetaDataToString:(id)arg1;
- (id)URL;
- (id)protocol;
- (id)URI;
- (id)getAcceptLangHeaderValue;
- (id)getCommonHeaders:(id)arg1;
- (id)addDefaultParametersToBody:(id)arg1 forMethod:(id)arg2;
- (id)makeRequest:(id)arg1 withError:(id *)arg2;
- (id)makeRequestObject:(id)arg1;
- (id)initWithRoute:(id)arg1 domain:(id)arg2 platform:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

