// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: pagespeed/controller/controller.proto
// Original file comments:
// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Author: cheesy@google.com (Steve Hill)
//
#ifndef GRPC_pagespeed_2fcontroller_2fcontroller_2eproto__INCLUDED
#define GRPC_pagespeed_2fcontroller_2fcontroller_2eproto__INCLUDED

#include "pagespeed/controller/controller.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace net_instaweb {


namespace grpc {

class CentralControllerRpcService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // RPC bridge for ScheduleRewriteController.
    // Send a ScheduleRewriteRequest with only a key, then wait for a
    // ScheduleRewriteResponse letting you know if it's OK to proceed. If true,
    // send another Request with only a status to indicate success/failure.
    // See schedule_rewrite_rpc_handler.h and schedule_rewrite_controller.h
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>> ScheduleRewrite(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>>(ScheduleRewriteRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>> AsyncScheduleRewrite(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>>(AsyncScheduleRewriteRaw(context, cq, tag));
    }
    // RPC bridge for ExpensiveOperationController.
    // Send a ScheduleExpensiveOperationRequest, then wait for a
    // ScheduleRewriteResponse letting you know if it's OK to proceed. If true,
    // send another Request when you are done. There is no payload in the request
    // since they are just used for synchronization.
    // See expensive_operation_rpc_handler.h and expensive_operation_controller.h
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>> ScheduleExpensiveOperation(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>>(ScheduleExpensiveOperationRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>> AsyncScheduleExpensiveOperation(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>>(AsyncScheduleExpensiveOperationRaw(context, cq, tag));
    }
  private:
    virtual ::grpc::ClientReaderWriterInterface< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>* ScheduleRewriteRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>* AsyncScheduleRewriteRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>* ScheduleExpensiveOperationRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>* AsyncScheduleExpensiveOperationRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReaderWriter< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>> ScheduleRewrite(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>>(ScheduleRewriteRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>> AsyncScheduleRewrite(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>>(AsyncScheduleRewriteRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>> ScheduleExpensiveOperation(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>>(ScheduleExpensiveOperationRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>> AsyncScheduleExpensiveOperation(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>>(AsyncScheduleExpensiveOperationRaw(context, cq, tag));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientReaderWriter< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>* ScheduleRewriteRaw(::grpc::ClientContext* context) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReaderWriter< ::net_instaweb::ScheduleRewriteRequest, ::net_instaweb::ScheduleRewriteResponse>* AsyncScheduleRewriteRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientReaderWriter< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>* ScheduleExpensiveOperationRaw(::grpc::ClientContext* context) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReaderWriter< ::net_instaweb::ScheduleExpensiveOperationRequest, ::net_instaweb::ScheduleExpensiveOperationResponse>* AsyncScheduleExpensiveOperationRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_ScheduleRewrite_;
    const ::grpc::RpcMethod rpcmethod_ScheduleExpensiveOperation_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // RPC bridge for ScheduleRewriteController.
    // Send a ScheduleRewriteRequest with only a key, then wait for a
    // ScheduleRewriteResponse letting you know if it's OK to proceed. If true,
    // send another Request with only a status to indicate success/failure.
    // See schedule_rewrite_rpc_handler.h and schedule_rewrite_controller.h
    virtual ::grpc::Status ScheduleRewrite(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::net_instaweb::ScheduleRewriteResponse, ::net_instaweb::ScheduleRewriteRequest>* stream);
    // RPC bridge for ExpensiveOperationController.
    // Send a ScheduleExpensiveOperationRequest, then wait for a
    // ScheduleRewriteResponse letting you know if it's OK to proceed. If true,
    // send another Request when you are done. There is no payload in the request
    // since they are just used for synchronization.
    // See expensive_operation_rpc_handler.h and expensive_operation_controller.h
    virtual ::grpc::Status ScheduleExpensiveOperation(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::net_instaweb::ScheduleExpensiveOperationResponse, ::net_instaweb::ScheduleExpensiveOperationRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_ScheduleRewrite : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ScheduleRewrite() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ScheduleRewrite() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ScheduleRewrite(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::net_instaweb::ScheduleRewriteResponse, ::net_instaweb::ScheduleRewriteRequest>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestScheduleRewrite(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::net_instaweb::ScheduleRewriteResponse, ::net_instaweb::ScheduleRewriteRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ScheduleExpensiveOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ScheduleExpensiveOperation() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ScheduleExpensiveOperation() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ScheduleExpensiveOperation(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::net_instaweb::ScheduleExpensiveOperationResponse, ::net_instaweb::ScheduleExpensiveOperationRequest>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestScheduleExpensiveOperation(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::net_instaweb::ScheduleExpensiveOperationResponse, ::net_instaweb::ScheduleExpensiveOperationRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ScheduleRewrite<WithAsyncMethod_ScheduleExpensiveOperation<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_ScheduleRewrite : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ScheduleRewrite() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ScheduleRewrite() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ScheduleRewrite(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::net_instaweb::ScheduleRewriteResponse, ::net_instaweb::ScheduleRewriteRequest>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ScheduleExpensiveOperation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ScheduleExpensiveOperation() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ScheduleExpensiveOperation() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ScheduleExpensiveOperation(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::net_instaweb::ScheduleExpensiveOperationResponse, ::net_instaweb::ScheduleExpensiveOperationRequest>* stream) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace grpc

}  // namespace net_instaweb


#endif  // GRPC_pagespeed_2fcontroller_2fcontroller_2eproto__INCLUDED