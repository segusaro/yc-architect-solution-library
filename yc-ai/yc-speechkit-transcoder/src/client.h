//
// Created by makhlu on 18.09.2021.
//
#include "yandex/cloud/operation/operation_service.grpc.pb.h"
#include "yandex/cloud/ai/stt/v2/stt_service.grpc.pb.h"
#include "yandex/cloud/ai/stt/v2/stt_service.pb.h"
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/security/credentials.h>
#include <grpcpp/create_channel.h>

#ifndef YC_SPEECHKIT_TRANSCODER_CLIENT_H
#define YC_SPEECHKIT_TRANSCODER_CLIENT_H

using yandex::cloud::ai::stt::v2::RecognitionSpec;
using yandex::cloud::ai::stt::v2::RecognitionSpec_AudioEncoding;

std::string str_pipeline_template;
std::string in_audio_uri;

/*  RecognitionSpec */
std::string language_code;
RecognitionSpec_AudioEncoding audio_encoding = RecognitionSpec_AudioEncoding::RecognitionSpec_AudioEncoding_OGG_OPUS;
int sample_rate_hertz = 48000;
std::string model = "general";
std::string auth_model = "Bearer";
std::string auth_token;

#endif //YC_SPEECHKIT_TRANSCODER_CLIENT_H
